#pragma once

#include "../../../JObject.hpp"


namespace java::security::spec
{
	class EncodedKeySpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EncodedKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncodedKeySpec(QAndroidJniObject obj);
		
		// Constructors
		EncodedKeySpec(jbyteArray arg0);
		
		// Methods
		jstring getAlgorithm();
		jbyteArray getEncoded();
		jstring getFormat();
	};
} // namespace java::security::spec

