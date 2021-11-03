#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;

namespace javax::crypto::spec
{
	class DESKeySpec : public JObject
	{
	public:
		// Fields
		static jint DES_KEY_LEN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DESKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DESKeySpec(QAndroidJniObject obj);
		
		// Constructors
		DESKeySpec(JByteArray arg0);
		DESKeySpec(JByteArray arg0, jint arg1);
		
		// Methods
		static jboolean isParityAdjusted(JByteArray arg0, jint arg1);
		static jboolean isWeak(JByteArray arg0, jint arg1);
		JByteArray getKey() const;
	};
} // namespace javax::crypto::spec

