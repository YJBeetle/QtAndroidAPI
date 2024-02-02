#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::graphics
{
	class PathIterator_Segment;
}
class JObject;

namespace android::graphics
{
	class PathIterator : public JObject
	{
	public:
		// Fields
		static jint VERB_CLOSE();
		static jint VERB_CONIC();
		static jint VERB_CUBIC();
		static jint VERB_DONE();
		static jint VERB_LINE();
		static jint VERB_MOVE();
		static jint VERB_QUAD();
		
		// QJniObject forward
		template<typename ...Ts> explicit PathIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PathIterator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean hasNext() const;
		android::graphics::PathIterator_Segment next() const;
		jint next(JFloatArray arg0, jint arg1) const;
		jint peek() const;
	};
} // namespace android::graphics

