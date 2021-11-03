#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;

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
		WrappedKeyEntry(JByteArray arg0, JString arg1, JString arg2, JObject arg3);
		
		// Methods
		JObject getAlgorithmParameterSpec();
		JString getTransformation();
		JByteArray getWrappedKeyBytes();
		JString getWrappingKeyAlias();
	};
} // namespace android::security::keystore

