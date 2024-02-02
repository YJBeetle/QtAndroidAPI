#pragma once

#include "../../../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
class JString;

namespace android::health::connect::datatypes
{
	class AppInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::graphics::Bitmap getIcon() const;
		JString getName() const;
		JString getPackageName() const;
	};
} // namespace android::health::connect::datatypes

