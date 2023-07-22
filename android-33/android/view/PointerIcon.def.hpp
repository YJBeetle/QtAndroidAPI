#pragma once

#include "../../JObject.hpp"

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
class JObject;

namespace android::view
{
	class PointerIcon : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
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
		template<typename ...Ts> explicit PointerIcon(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PointerIcon(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::PointerIcon create(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2);
		static android::view::PointerIcon getSystemIcon(android::content::Context arg0, jint arg1);
		static android::view::PointerIcon load(android::content::res::Resources arg0, jint arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

