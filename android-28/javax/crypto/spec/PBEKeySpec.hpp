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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PBEKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PBEKeySpec(QAndroidJniObject obj);
		
		// Constructors
		PBEKeySpec(JCharArray arg0);
		PBEKeySpec(JCharArray arg0, JByteArray arg1, jint arg2);
		PBEKeySpec(JCharArray arg0, JByteArray arg1, jint arg2, jint arg3);
		
		// Methods
		void clearPassword() const;
		jint getIterationCount() const;
		jint getKeyLength() const;
		JCharArray getPassword() const;
		JByteArray getSalt() const;
	};
} // namespace javax::crypto::spec

