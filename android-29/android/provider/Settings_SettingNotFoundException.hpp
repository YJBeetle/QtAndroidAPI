#pragma once

#include "../util/AndroidException.hpp"

class JString;

namespace android::provider
{
	class Settings_SettingNotFoundException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Settings_SettingNotFoundException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		Settings_SettingNotFoundException(QJniObject obj);
		
		// Constructors
		Settings_SettingNotFoundException(JString arg0);
		
		// Methods
	};
} // namespace android::provider

