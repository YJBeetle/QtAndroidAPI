#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class LocaleConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATUS_NOT_SPECIFIED();
		static jint STATUS_PARSING_FAILED();
		static jint STATUS_SUCCESS();
		static JString TAG_LOCALE();
		static JString TAG_LOCALE_CONFIG();
		
		// QJniObject forward
		template<typename ...Ts> explicit LocaleConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocaleConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LocaleConfig(android::content::Context arg0);
		LocaleConfig(android::os::LocaleList arg0);
		
		// Methods
		static android::app::LocaleConfig fromContextIgnoringOverride(android::content::Context arg0);
		jint describeContents() const;
		jint getStatus() const;
		android::os::LocaleList getSupportedLocales() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

