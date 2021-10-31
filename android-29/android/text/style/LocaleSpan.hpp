#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class TextPaint;
}
namespace java::util
{
	class Locale;
}

namespace android::text::style
{
	class LocaleSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		LocaleSpan(QAndroidJniObject obj);
		
		// Constructors
		LocaleSpan(android::os::LocaleList arg0);
		LocaleSpan(android::os::Parcel arg0);
		LocaleSpan(java::util::Locale arg0);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getLocale();
		QAndroidJniObject getLocales();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

