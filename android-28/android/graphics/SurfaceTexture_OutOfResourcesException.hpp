#pragma once

#include "../../java/lang/Exception.hpp"

class JString;

namespace android::graphics
{
	class SurfaceTexture_OutOfResourcesException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceTexture_OutOfResourcesException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceTexture_OutOfResourcesException(QJniObject obj);
		
		// Constructors
		SurfaceTexture_OutOfResourcesException();
		SurfaceTexture_OutOfResourcesException(JString arg0);
		
		// Methods
	};
} // namespace android::graphics

