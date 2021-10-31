#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics
{
	class Insets : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject NONE();
		jint bottom();
		jint left();
		jint right();
		jint top();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Insets(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Insets(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject add(android::graphics::Insets arg0, android::graphics::Insets arg1);
		static QAndroidJniObject max(android::graphics::Insets arg0, android::graphics::Insets arg1);
		static QAndroidJniObject min(android::graphics::Insets arg0, android::graphics::Insets arg1);
		static QAndroidJniObject of(android::graphics::Rect arg0);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject subtract(android::graphics::Insets arg0, android::graphics::Insets arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

