#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::security::keystore
{
	class WrappedKeyEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WrappedKeyEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WrappedKeyEntry(QJniObject obj);
		
		// Constructors
		WrappedKeyEntry(jbyteArray arg0, jstring arg1, jstring arg2, __JniBaseClass arg3);
		
		// Methods
		__JniBaseClass getAlgorithmParameterSpec();
		jstring getTransformation();
		jbyteArray getWrappedKeyBytes();
		jstring getWrappingKeyAlias();
	};
} // namespace android::security::keystore

