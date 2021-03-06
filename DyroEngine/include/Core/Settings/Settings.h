#ifndef _SETTINGS_H
#define _SETTINGS_H

#ifndef _STRING_H
	#include "Defines/string.h"
#endif

class Settings
{
public:
	Settings();
	virtual ~Settings();

	virtual void initialize(const std::tstring& filePath);

protected:

	virtual void parseSettingsFile(const std::tstring& valueName, const std::tstring& valueData) = 0;

private:
	void loadFile(const std::tstring& filePath);
};

#endif

