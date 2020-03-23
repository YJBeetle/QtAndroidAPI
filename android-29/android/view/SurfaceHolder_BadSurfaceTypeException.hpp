#pragma once

#ifndef ANDROID_VIEW_SURFACEHOLDER_BADSURFACETYPEEXCEPTION
#define ANDROID_VIEW_SURFACEHOLDER_BADSURFACETYPEEXCEPTION

#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::view
{
	class SurfaceHolder_BadSurfaceTypeException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void SurfaceHolder_BadSurfaceTypeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"()V");
	}
	void SurfaceHolder_BadSurfaceTypeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class SurfaceHolder_BadSurfaceTypeException : public __jni_impl::android::view::SurfaceHolder_BadSurfaceTypeException
	{
	public:
		SurfaceHolder_BadSurfaceTypeException(QAndroidJniObject obj) { __thiz = obj; }
		SurfaceHolder_BadSurfaceTypeException()
		{
			__constructor();
		}
		SurfaceHolder_BadSurfaceTypeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_SURFACEHOLDER_BADSURFACETYPEEXCEPTION

