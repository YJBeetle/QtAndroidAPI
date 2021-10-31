#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::spec
{
	class EncodedKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EncodedKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EncodedKeySpec(QAndroidJniObject obj);
		
		// Constructors
		EncodedKeySpec(jbyteArray arg0);
		
		// Methods
		jstring getAlgorithm();
		jbyteArray getEncoded();
		jstring getFormat();
	};
} // namespace java::security::spec

