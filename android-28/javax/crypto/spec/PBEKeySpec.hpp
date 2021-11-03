#pragma once

#include "../../../JObject.hpp"


namespace javax::crypto::spec
{
	class PBEKeySpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PBEKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PBEKeySpec(QJniObject obj);
		
		// Constructors
		PBEKeySpec(jcharArray arg0);
		PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2);
		PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3);
		
		// Methods
		void clearPassword();
		jint getIterationCount();
		jint getKeyLength();
		jcharArray getPassword();
		jbyteArray getSalt();
	};
} // namespace javax::crypto::spec

