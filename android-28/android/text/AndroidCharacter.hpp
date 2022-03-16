#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;

namespace android::text
{
	class AndroidCharacter : public JObject
	{
	public:
		// Fields
		static jint EAST_ASIAN_WIDTH_AMBIGUOUS();
		static jint EAST_ASIAN_WIDTH_FULL_WIDTH();
		static jint EAST_ASIAN_WIDTH_HALF_WIDTH();
		static jint EAST_ASIAN_WIDTH_NARROW();
		static jint EAST_ASIAN_WIDTH_NEUTRAL();
		static jint EAST_ASIAN_WIDTH_WIDE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AndroidCharacter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AndroidCharacter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AndroidCharacter();
		
		// Methods
		static void getDirectionalities(JCharArray arg0, JByteArray arg1, jint arg2);
		static jint getEastAsianWidth(jchar arg0);
		static void getEastAsianWidths(JCharArray arg0, jint arg1, jint arg2, JByteArray arg3);
		static jchar getMirror(jchar arg0);
		static jboolean mirror(JCharArray arg0, jint arg1, jint arg2);
	};
} // namespace android::text

