#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Paint_FontMetricsInt;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::text::style
{
	class LineHeightSpan_Standard : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LineHeightSpan_Standard(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineHeightSpan_Standard(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		LineHeightSpan_Standard(android::os::Parcel arg0);
		LineHeightSpan_Standard(jint arg0);
		
		// Methods
		void chooseHeight(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5) const;
		jint describeContents() const;
		jint getHeight() const;
		jint getSpanTypeId() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

