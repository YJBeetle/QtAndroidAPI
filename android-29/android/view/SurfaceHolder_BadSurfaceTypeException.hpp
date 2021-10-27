#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::view
{
	class SurfaceHolder_BadSurfaceTypeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		SurfaceHolder_BadSurfaceTypeException(QAndroidJniObject obj);
		// Constructors
		SurfaceHolder_BadSurfaceTypeException();
		SurfaceHolder_BadSurfaceTypeException(jstring &arg0);
		SurfaceHolder_BadSurfaceTypeException(const QString &arg0);
		
		// Methods
	};
} // namespace android::view

