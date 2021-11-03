#pragma once

#include "../../../JObject.hpp"


namespace android::security::keystore
{
	class WrappedKeyEntry : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WrappedKeyEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WrappedKeyEntry(QAndroidJniObject obj);
		
		// Constructors
		WrappedKeyEntry(jbyteArray arg0, jstring arg1, jstring arg2, JObject arg3);
		
		// Methods
		JObject getAlgorithmParameterSpec();
		jstring getTransformation();
		jbyteArray getWrappedKeyBytes();
		jstring getWrappingKeyAlias();
	};
} // namespace android::security::keystore

