#pragma once

#include "../../JObject.hpp"


namespace java::text
{
	class Bidi : public JObject
	{
	public:
		// Fields
		static jint DIRECTION_DEFAULT_LEFT_TO_RIGHT();
		static jint DIRECTION_DEFAULT_RIGHT_TO_LEFT();
		static jint DIRECTION_LEFT_TO_RIGHT();
		static jint DIRECTION_RIGHT_TO_LEFT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Bidi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Bidi(QJniObject obj);
		
		// Constructors
		Bidi(JObject arg0);
		Bidi(jstring arg0, jint arg1);
		Bidi(jcharArray arg0, jint arg1, jbyteArray arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		static void reorderVisually(jbyteArray arg0, jint arg1, jobjectArray arg2, jint arg3, jint arg4);
		static jboolean requiresBidi(jcharArray arg0, jint arg1, jint arg2);
		jboolean baseIsLeftToRight();
		java::text::Bidi createLineBidi(jint arg0, jint arg1);
		jint getBaseLevel();
		jint getLength();
		jint getLevelAt(jint arg0);
		jint getRunCount();
		jint getRunLevel(jint arg0);
		jint getRunLimit(jint arg0);
		jint getRunStart(jint arg0);
		jboolean isLeftToRight();
		jboolean isMixed();
		jboolean isRightToLeft();
		jstring toString();
	};
} // namespace java::text

