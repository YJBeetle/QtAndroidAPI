#pragma once

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
		LocaleSpan(QAndroidJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
		
		// Constructors
		LocaleSpan(android::os::LocaleList arg0);
		LocaleSpan(android::os::Parcel arg0);
		LocaleSpan(java::util::Locale arg0);
		
		// Methods
		jint describeContents() const;
		java::util::Locale getLocale() const;
		android::os::LocaleList getLocales() const;
		jint getSpanTypeId() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void updateMeasureState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

