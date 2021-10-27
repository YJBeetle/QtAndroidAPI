#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class GCMParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		GCMParameterSpec(QAndroidJniObject obj);
		// Constructors
		GCMParameterSpec(jint &arg0, jbyteArray &arg1);
		GCMParameterSpec(jint &arg0, jbyteArray &arg1, jint &arg2, jint &arg3);
		GCMParameterSpec() = default;
		
		// Methods
		jbyteArray getIV();
		jint getTLen();
	};
} // namespace javax::crypto::spec

