#pragma once

#include "./Person.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Person_Builder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Person_Builder::Person_Builder()
		: JObject(
			"android.app.Person$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::Person Person_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Person;"
		);
	}
	inline android::app::Person_Builder Person_Builder::setBot(jboolean arg0) const
	{
		return callObjectMethod(
			"setBot",
			"(Z)Landroid/app/Person$Builder;",
			arg0
		);
	}
	inline android::app::Person_Builder Person_Builder::setIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Person$Builder;",
			arg0.object()
		);
	}
	inline android::app::Person_Builder Person_Builder::setImportant(jboolean arg0) const
	{
		return callObjectMethod(
			"setImportant",
			"(Z)Landroid/app/Person$Builder;",
			arg0
		);
	}
	inline android::app::Person_Builder Person_Builder::setKey(JString arg0) const
	{
		return callObjectMethod(
			"setKey",
			"(Ljava/lang/String;)Landroid/app/Person$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Person_Builder Person_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/CharSequence;)Landroid/app/Person$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Person_Builder Person_Builder::setUri(JString arg0) const
	{
		return callObjectMethod(
			"setUri",
			"(Ljava/lang/String;)Landroid/app/Person$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
