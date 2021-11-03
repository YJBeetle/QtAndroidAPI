#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::content
{
	class Context;
}

namespace android::view
{
	class OrientationListener : public JObject
	{
	public:
		// Fields
		static jint ORIENTATION_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit OrientationListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OrientationListener(QJniObject obj);
		
		// Constructors
		OrientationListener(android::content::Context arg0);
		OrientationListener(android::content::Context arg0, jint arg1);
		
		// Methods
		void disable();
		void enable();
		void onAccuracyChanged(jint arg0, jint arg1);
		void onOrientationChanged(jint arg0);
		void onSensorChanged(jint arg0, JFloatArray arg1);
	};
} // namespace android::view

