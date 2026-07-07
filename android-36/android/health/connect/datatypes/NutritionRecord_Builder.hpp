#pragma once

#include "./Metadata.def.hpp"
#include "./NutritionRecord.def.hpp"
#include "./units/Energy.def.hpp"
#include "./units/Mass.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./NutritionRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline NutritionRecord_Builder::NutritionRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2)
		: JObject(
			"android.health.connect.datatypes.NutritionRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::NutritionRecord NutritionRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/NutritionRecord;"
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/NutritionRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/NutritionRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setBiotin(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setBiotin",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setCaffeine(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setCaffeine",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setCalcium(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setCalcium",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setChloride(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setChloride",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setCholesterol(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setCholesterol",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setChromium(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setChromium",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setCopper(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setCopper",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setDietaryFiber(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setDietaryFiber",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setEnergy(android::health::connect::datatypes::units::Energy arg0) const
	{
		return callObjectMethod(
			"setEnergy",
			"(Landroid/health/connect/datatypes/units/Energy;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setEnergyFromFat(android::health::connect::datatypes::units::Energy arg0) const
	{
		return callObjectMethod(
			"setEnergyFromFat",
			"(Landroid/health/connect/datatypes/units/Energy;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setFolate(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setFolate",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setFolicAcid(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setFolicAcid",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setIodine(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setIodine",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setIron(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setIron",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setMagnesium(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setMagnesium",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setManganese(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setManganese",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setMealName(JString arg0) const
	{
		return callObjectMethod(
			"setMealName",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setMealType(jint arg0) const
	{
		return callObjectMethod(
			"setMealType",
			"(I)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setMolybdenum(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setMolybdenum",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setMonounsaturatedFat(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setMonounsaturatedFat",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setNiacin(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setNiacin",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setPantothenicAcid(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setPantothenicAcid",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setPhosphorus(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setPhosphorus",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setPolyunsaturatedFat(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setPolyunsaturatedFat",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setPotassium(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setPotassium",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setProtein(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setProtein",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setRiboflavin(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setRiboflavin",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setSaturatedFat(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setSaturatedFat",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setSelenium(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setSelenium",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setSodium(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setSodium",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setSugar(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setSugar",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setThiamin(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setThiamin",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setTotalCarbohydrate(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setTotalCarbohydrate",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setTotalFat(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setTotalFat",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setTransFat(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setTransFat",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setUnsaturatedFat(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setUnsaturatedFat",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setVitaminA(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setVitaminA",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setVitaminB12(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setVitaminB12",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setVitaminB6(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setVitaminB6",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setVitaminC(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setVitaminC",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setVitaminD(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setVitaminD",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setVitaminE(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setVitaminE",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setVitaminK(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setVitaminK",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::NutritionRecord_Builder NutritionRecord_Builder::setZinc(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callObjectMethod(
			"setZinc",
			"(Landroid/health/connect/datatypes/units/Mass;)Landroid/health/connect/datatypes/NutritionRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
