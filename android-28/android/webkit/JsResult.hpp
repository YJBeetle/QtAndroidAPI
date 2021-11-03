#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class JsResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JsResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JsResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel() const;
		void confirm() const;
	};
} // namespace android::webkit

