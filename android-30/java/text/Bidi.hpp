#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;
class JObjectArray;
class JString;

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
		Bidi(JString arg0, jint arg1);
		Bidi(JCharArray arg0, jint arg1, JByteArray arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		static void reorderVisually(JByteArray arg0, jint arg1, JObjectArray arg2, jint arg3, jint arg4);
		static jboolean requiresBidi(JCharArray arg0, jint arg1, jint arg2);
		jboolean baseIsLeftToRight() const;
		java::text::Bidi createLineBidi(jint arg0, jint arg1) const;
		jint getBaseLevel() const;
		jint getLength() const;
		jint getLevelAt(jint arg0) const;
		jint getRunCount() const;
		jint getRunLevel(jint arg0) const;
		jint getRunLimit(jint arg0) const;
		jint getRunStart(jint arg0) const;
		jboolean isLeftToRight() const;
		jboolean isMixed() const;
		jboolean isRightToLeft() const;
		JString toString() const;
	};
} // namespace java::text

