#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class Display;
}
namespace android::view
{
	class SurfaceControlViewHost_SurfacePackage;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class SurfaceControlViewHost : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SurfaceControlViewHost(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControlViewHost(QAndroidJniObject obj);
		
		// Constructors
		SurfaceControlViewHost(android::content::Context arg0, android::view::Display arg1, JObject arg2);
		
		// Methods
		android::view::SurfaceControlViewHost_SurfacePackage getSurfacePackage();
		android::view::View getView();
		void relayout(jint arg0, jint arg1);
		void release();
		void setView(android::view::View arg0, jint arg1, jint arg2);
	};
} // namespace android::view

