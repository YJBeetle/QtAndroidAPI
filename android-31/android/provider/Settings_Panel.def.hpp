#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class Settings_Panel : public JObject
	{
	public:
		// Fields
		static JString ACTION_INTERNET_CONNECTIVITY();
		static JString ACTION_NFC();
		static JString ACTION_VOLUME();
		static JString ACTION_WIFI();
		
		// QJniObject forward
		template<typename ...Ts> explicit Settings_Panel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Settings_Panel(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

