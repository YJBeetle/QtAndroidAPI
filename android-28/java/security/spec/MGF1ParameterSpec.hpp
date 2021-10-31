#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::spec
{
	class MGF1ParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static java::security::spec::MGF1ParameterSpec SHA1();
		static java::security::spec::MGF1ParameterSpec SHA224();
		static java::security::spec::MGF1ParameterSpec SHA256();
		static java::security::spec::MGF1ParameterSpec SHA384();
		static java::security::spec::MGF1ParameterSpec SHA3_224();
		static java::security::spec::MGF1ParameterSpec SHA3_256();
		static java::security::spec::MGF1ParameterSpec SHA3_384();
		static java::security::spec::MGF1ParameterSpec SHA3_512();
		static java::security::spec::MGF1ParameterSpec SHA512();
		static java::security::spec::MGF1ParameterSpec SHA512_224();
		static java::security::spec::MGF1ParameterSpec SHA512_256();
		
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

