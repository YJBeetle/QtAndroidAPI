#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class PBEParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		PBEParameterSpec(QAndroidJniObject obj);
		// Constructors
		PBEParameterSpec(jbyteArray arg0, jint arg1);
		PBEParameterSpec(jbyteArray arg0, jint arg1, __JniBaseClass arg2);
		PBEParameterSpec() = default;
		
		// Methods
		jint getIterationCount();
		QAndroidJniObject getParameterSpec();
		jbyteArray getSalt();
	};
} // namespace javax::crypto::spec

