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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MGF1ParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MGF1ParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		MGF1ParameterSpec(jstring arg0);
		
		// Methods
		jstring getDigestAlgorithm();
		jstring toString();
	};
} // namespace java::security::spec

