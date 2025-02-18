#pragma once

#include "../../JObject.hpp"

class JFloatArray;

namespace android::graphics
{
	class PathIterator_Segment : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PathIterator_Segment(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PathIterator_Segment(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jfloat getConicWeight() const;
		JFloatArray getPoints() const;
		jint getVerb() const;
	};
} // namespace android::graphics

