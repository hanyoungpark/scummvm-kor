/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef TITANIC_LIFTBOT_SCRIPT_H
#define TITANIC_LIFTBOT_SCRIPT_H

#include "titanic/true_talk/tt_npc_script.h"

namespace Titanic {

class LiftbotScript : public TTnpcScript {
private:
	TTmapEntryArray _states;
	static int _stateIndex;
private:
	/**
	 * Setup sentence data
	 */
	void setupSentences();

	int addResponse1(int mode, bool flag, int id);
	int sentence1(const TTsentence *sentence);

	/**
	 * Gets the current floor
	 */
	int getCurrentFloor() const;

	int getState6() const;

	/**
	 * Adds a dialogue response and sets the state
	 */
	int addDialogueAndState(int id, int state);
public:
	LiftbotScript(int val1, const char *charClass, int v2,
		const char *charName, int v3, int val2, int v4, int v5, int v6, int v7);

	/**
	 * Chooses and adds a conversation response based on a specified tag Id.
	 */
	virtual int chooseResponse(const TTroomScript *roomScript, const TTsentence *sentence, uint tag);

	/**
	 * Does NPC specific processing of the parsed sentence
	 */
	virtual int process(const TTroomScript *roomScript, const TTsentence *sentence);

	/**
	 * Called when the script/id changes
	 */
	virtual ScriptChangedResult scriptChanged(uint id);

	/**
	 * Called when the script/id changes
	 */
	virtual ScriptChangedResult scriptChanged(const TTroomScript *roomScript, uint id);

	virtual int handleQuote(const TTroomScript *roomScript, const TTsentence *sentence,
		uint tag1, uint tag2, uint remainder);

	/**
	 * Handles updating NPC state based on specified dialogue Ids and dial positions
	 */
	virtual int updateState(uint oldId, uint newId, int index);

	/**
	 * Handles getting a pre-response
	 */
	virtual int preResponse(uint id);

	/**
	 * Returns a bitset of the dials being off or not
	 */
	virtual uint getDialsBitset() const;

	/**
	 * Process a sentence fragment entry
	 */
	virtual int doSentenceEntry(int val1, const int *srcIdP, const TTroomScript *roomScript, const TTsentence *sentence);

	/**
	 * Sets a given dial to be pointing in a specified region (0 to 2)
	 */
	virtual void setDialRegion(int dialNum, int region);
};

} // End of namespace Titanic

#endif /* TITANIC_LIFTBOT_SCRIPT_H */
