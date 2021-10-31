#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class View;
}

namespace android::text::method
{
	class PasswordTransformationMethod : public __JniBaseClass
	{
	public:
		// Fields
		
		PasswordTransformationMethod(QAndroidJniObject obj);
		// Constructors
		PasswordTransformationMethod();
		
		// Methods
		static QAndroidJniObject getInstance();
		void afterTextChanged(__JniBaseClass arg0);
		void beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		jstring getTransformation(jstring arg0, android::view::View arg1);
		void onFocusChanged(android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4);
		void onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::text::method

