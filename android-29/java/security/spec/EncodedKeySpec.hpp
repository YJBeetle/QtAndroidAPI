#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::spec
{
	class EncodedKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		EncodedKeySpec(QAndroidJniObject obj);
		// Constructors
		EncodedKeySpec(jbyteArray arg0);
		EncodedKeySpec() = default;
		
		// Methods
		jstring getAlgorithm();
		jbyteArray getEncoded();
		jstring getFormat();
	};
} // namespace java::security::spec

