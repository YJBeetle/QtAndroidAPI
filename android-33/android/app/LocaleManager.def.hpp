#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class LocaleList;
}
class JString;

namespace android::app
{
	class LocaleManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocaleManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::os::LocaleList getApplicationLocales() const;
		android::os::LocaleList getApplicationLocales(JString arg0) const;
		android::os::LocaleList getSystemLocales() const;
		void setApplicationLocales(android::os::LocaleList arg0) const;
	};
} // namespace android::app

