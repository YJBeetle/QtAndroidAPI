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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OrientationListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OrientationListener(QAndroidJniObject obj);
		
		// Constructors
		OrientationListener(android::content::Context arg0);
		OrientationListener(android::content::Context arg0, jint arg1);
		
		// Methods
		void disable() const;
		void enable() const;
		void onAccuracyChanged(jint arg0, jint arg1) const;
		void onOrientationChanged(jint arg0) const;
		void onSensorChanged(jint arg0, JFloatArray arg1) const;
	};
} // namespace android::view

