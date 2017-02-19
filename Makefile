.PHONY: clean All

All:
	@echo "----------Building project:[ TextGame - Debug ]----------"
	@cd "TextGame" && "$(MAKE)" -f  "TextGame.mk"
clean:
	@echo "----------Cleaning project:[ TextGame - Debug ]----------"
	@cd "TextGame" && "$(MAKE)" -f  "TextGame.mk" clean
