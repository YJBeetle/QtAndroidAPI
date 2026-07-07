#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::pdf
{
	class LoadParams;
}
class JString;

namespace android::graphics::pdf
{
	class LoadParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LoadParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LoadParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LoadParams_Builder();
		
		// Methods
		android::graphics::pdf::LoadParams build() const;
		android::graphics::pdf::LoadParams_Builder setPassword(JString arg0) const;
	};
} // namespace android::graphics::pdf

