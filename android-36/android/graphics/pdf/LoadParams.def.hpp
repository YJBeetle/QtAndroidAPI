#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::graphics::pdf
{
	class LoadParams : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LoadParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LoadParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getPassword() const;
	};
} // namespace android::graphics::pdf

