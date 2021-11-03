#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class Layout;
}

namespace android::text::style
{
	class QuoteSpan : public JObject
	{
	public:
		// Fields
		static jint STANDARD_COLOR();
		static jint STANDARD_GAP_WIDTH_PX();
		static jint STANDARD_STRIPE_WIDTH_PX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit QuoteSpan(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		QuoteSpan(QAndroidJniObject obj);
		
		// Constructors
		QuoteSpan();
		QuoteSpan(android::os::Parcel arg0);
		QuoteSpan(jint arg0);
		QuoteSpan(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents();
		void drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11);
		jint getColor();
		jint getGapWidth();
		jint getLeadingMargin(jboolean arg0);
		jint getSpanTypeId();
		jint getStripeWidth();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

