#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::view
{
	class SurfaceHolder_BadSurfaceTypeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SurfaceHolder_BadSurfaceTypeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceHolder_BadSurfaceTypeException(QAndroidJniObject obj);
		
		// Constructors
		SurfaceHolder_BadSurfaceTypeException();
		SurfaceHolder_BadSurfaceTypeException(jstring arg0);
		
		// Methods
	};
} // namespace android::view

