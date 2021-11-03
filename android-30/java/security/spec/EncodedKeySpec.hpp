#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;

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
		EncodedKeySpec(JByteArray arg0);
		
		// Methods
		JString getAlgorithm();
		JByteArray getEncoded();
		JString getFormat();
	};
} // namespace java::security::spec

