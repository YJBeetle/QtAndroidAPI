#pragma once

#ifndef ANDROID_R_XML
#define ANDROID_R_XML

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_xml : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	
	// Constructors
	void R_xml::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$xml",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_xml : public __jni_impl::android::R_xml
	{
	public:
		R_xml(QAndroidJniObject obj) { __thiz = obj; }
		R_xml()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_XML

