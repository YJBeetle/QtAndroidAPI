#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::security::keystore
{
	class WrappedKeyEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		WrappedKeyEntry(QAndroidJniObject obj);
		// Constructors
		WrappedKeyEntry(jbyteArray &arg0, jstring &arg1, jstring &arg2, __JniBaseClass &arg3);
		WrappedKeyEntry(jbyteArray &arg0, const QString &arg1, const QString &arg2, __JniBaseClass &arg3);
		WrappedKeyEntry() = default;
		
		// Methods
		QAndroidJniObject getAlgorithmParameterSpec();
		jstring getTransformation();
		jbyteArray getWrappedKeyBytes();
		jstring getWrappingKeyAlias();
	};
} // namespace android::security::keystore

