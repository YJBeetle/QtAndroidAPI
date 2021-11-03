#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::text::style
{
	class EasyEditSpan : public JObject
	{
	public:
		// Fields
		static JString EXTRA_TEXT_CHANGED_TYPE();
		static jint TEXT_DELETED();
		static jint TEXT_MODIFIED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EasyEditSpan(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EasyEditSpan(QAndroidJniObject obj);
		
		// Constructors
		EasyEditSpan();
		EasyEditSpan(android::app::PendingIntent arg0);
		EasyEditSpan(android::os::Parcel arg0);
		
		// Methods
		jint describeContents() const;
		jint getSpanTypeId() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

