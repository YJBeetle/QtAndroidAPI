#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class PointerIcon : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_ALIAS();
		static jint TYPE_ALL_SCROLL();
		static jint TYPE_ARROW();
		static jint TYPE_CELL();
		static jint TYPE_CONTEXT_MENU();
		static jint TYPE_COPY();
		static jint TYPE_CROSSHAIR();
		static jint TYPE_DEFAULT();
		static jint TYPE_GRAB();
		static jint TYPE_GRABBING();
		static jint TYPE_HAND();
		static jint TYPE_HELP();
		static jint TYPE_HORIZONTAL_DOUBLE_ARROW();
		static jint TYPE_NO_DROP();
		static jint TYPE_NULL();
		static jint TYPE_TEXT();
		static jint TYPE_TOP_LEFT_DIAGONAL_DOUBLE_ARROW();
		static jint TYPE_TOP_RIGHT_DIAGONAL_DOUBLE_ARROW();
		static jint TYPE_VERTICAL_DOUBLE_ARROW();
		static jint TYPE_VERTICAL_TEXT();
		static jint TYPE_WAIT();
		static jint TYPE_ZOOM_IN();
		static jint TYPE_ZOOM_OUT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PointerIcon(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PointerIcon(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject create(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2);
		static QAndroidJniObject getSystemIcon(android::content::Context arg0, jint arg1);
		static QAndroidJniObject load(android::content::res::Resources arg0, jint arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

