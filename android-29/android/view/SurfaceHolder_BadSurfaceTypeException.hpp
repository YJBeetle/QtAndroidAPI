#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::view
{
	class SurfaceHolder_BadSurfaceTypeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceHolder_BadSurfaceTypeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceHolder_BadSurfaceTypeException(QJniObject obj);
		
		// Constructors
		SurfaceHolder_BadSurfaceTypeException();
		SurfaceHolder_BadSurfaceTypeException(JString arg0);
		
		// Methods
	};
} // namespace android::view

