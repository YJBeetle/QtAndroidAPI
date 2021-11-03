#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JCharArray;

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
		PBEKeySpec(JCharArray arg0);
		PBEKeySpec(JCharArray arg0, JByteArray arg1, jint arg2);
		PBEKeySpec(JCharArray arg0, JByteArray arg1, jint arg2, jint arg3);
		
		// Methods
		void clearPassword();
		jint getIterationCount();
		jint getKeyLength();
		JCharArray getPassword();
		JByteArray getSalt();
	};
} // namespace javax::crypto::spec

