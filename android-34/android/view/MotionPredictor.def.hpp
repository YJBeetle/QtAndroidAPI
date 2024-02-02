#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class MotionEvent;
}

namespace android::view
{
	class MotionPredictor : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MotionPredictor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MotionPredictor(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MotionPredictor(android::content::Context arg0);
		
		// Methods
		jboolean isPredictionAvailable(jint arg0, jint arg1) const;
		android::view::MotionEvent predict(jlong arg0) const;
		void record(android::view::MotionEvent arg0) const;
	};
} // namespace android::view

