#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::spec
{
	class MGF1ParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject SHA1();
		static QAndroidJniObject SHA224();
		static QAndroidJniObject SHA256();
		static QAndroidJniObject SHA384();
		static QAndroidJniObject SHA3_224();
		static QAndroidJniObject SHA3_256();
		static QAndroidJniObject SHA3_384();
		static QAndroidJniObject SHA3_512();
		static QAndroidJniObject SHA512();
		static QAndroidJniObject SHA512_224();
		static QAndroidJniObject SHA512_256();
		
		MGF1ParameterSpec(QAndroidJniObject obj);
		// Constructors
		MGF1ParameterSpec(jstring arg0);
		MGF1ParameterSpec() = default;
		
		// Methods
		jstring getDigestAlgorithm();
		jstring toString();
	};
} // namespace java::security::spec

