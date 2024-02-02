#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::window
{
	class BackEvent : public JObject
	{
	public:
		// Fields
		static jint EDGE_LEFT();
		static jint EDGE_RIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit BackEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BackEvent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BackEvent(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3);
		
		// Methods
		jfloat getProgress() const;
		jint getSwipeEdge() const;
		jfloat getTouchX() const;
		jfloat getTouchY() const;
		JString toString() const;
	};
} // namespace android::window

